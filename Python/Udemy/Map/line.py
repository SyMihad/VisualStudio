import folium

points = [[22.21482497806762, 91.73309013065055], [22.227624929703758, 91.74322257373508], [22.224770885946313, 91.76962977596996]]

mymap = folium.Map(location=points[0])

folium.PolyLine(points, color="green", weight=2.5, opacity=1).add_to(mymap)

mymap.save("line.html")