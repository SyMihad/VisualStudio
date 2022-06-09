import folium
from numpy.lib.function_base import median
import pandas

def defColour(elev):
    if elev<=1000:
        return "gray"
    elif elev>1000.0 and elev<=2000.0:
        return "orange"
    elif elev>2000.0 and elev<=3000.0:
        return "green"
    elif elev>3000.0:
        return "red"


data = pandas.read_csv("volcanoes.txt")
lon = list(data["LON"])
lat = list(data["LAT"])
name = list(data["NAME"])
elev = list(data["ELEV"])
map2 = folium.Map(zoom_start=6, location=[median(lat), median(lon)])
fgv = folium.FeatureGroup(name="Volcanoes")
# for lt, ln, nm, el in zip(lat, lon, name, elev):
#     fg.add_child(folium.Marker(location=[lt, ln], popup=str(nm), icon=folium.Icon(color=defColour(el))))

for lt, ln, nm, el in zip(lat, lon, name, elev):
    fgv.add_child(folium.CircleMarker(location=[lt, ln], popup=str(nm), radius=8, fill_color=defColour(el),color="gray", fill_opacity=0.7))
fgw = folium.FeatureGroup(name="World")
fgw.add_child(folium.GeoJson(data=open("world.json", "r", encoding='utf-8-sig').read()))
map2.add_child(fgv)
map2.add_child(fgw)
map2.add_child(folium.LayerControl())
map2.save("volcano.html")