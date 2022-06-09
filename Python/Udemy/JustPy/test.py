from typing import Text
import justpy as jp
import pandas
from datetime import datetime
from pytz import UTC
data = pandas.read_csv("reviews.csv", parse_dates=["Timestamp"])
data["Day"] = data["Timestamp"].dt.week
day_average = data.groupby(["Day"]).mean()
graph_info = """
{
    chart: {
        type: 'spline',
        inverted: false
    },
    title: {
        text: 'Average rating by day'
    },
    subtitle: {
        text: 'This is for daily rating chart'
    },
    xAxis: {
        reversed: false,
        title: {
            enabled: true,
            text: 'Day'
        },
        labels: {
            format: '{value}'
        },
        accessibility: {
            rangeDescription: ''
        },
        maxPadding: 0.05,
        showLastLabel: true
    },
    yAxis: {
        title: {
            text: 'Rating'
        },
        labels: {
            format: '{value}'
        },
        accessibility: {
            rangeDescription: 'Range: 0.0 to 5.0'
        },
        lineWidth: 2
    },
    legend: {
        enabled: false
    },
    tooltip: {
        headerFormat: '<b>{series.name}</b><br/>',
        pointFormat: '{point.x} has rating {point.y}'
    },
    plotOptions: {
        spline: {
            marker: {
                enable: false
            }
        }
    },
    series: [{
        name: 'Rating',
        data: [[0, 15], [10, -50], [20, -56.5], [30, -46.5], [40, -22.1],
            [50, -2.5], [60, -27.7], [70, -55.7], [80, -76.5]]
    }]
}
"""

def app():
    wp=jp.QuasarPage()
    h1= jp.QDiv(a=wp, text="Analysis of course review", classes="text-h3 text-center q-pa-md")
    p1= jp.QDiv(a=wp, text="These graph represents course review analysis", classes="q-pa-md text-h4 text-left blue-6")
    hc = jp.HighCharts(a=wp, options=graph_info)
    # hc.options.title.text="Average rating by day"
    # hc.options.subtitle.text="This is for daily rating chart"
    # hc.options.xAxis.title.text = "Rating"
    # hc.options.yAxis.title.text = "Day"
    hc.options.xAxis.categories = list(day_average.index)
    hc.options.series[0].data = list(day_average["Rating"])
    return wp

jp.justpy(app)