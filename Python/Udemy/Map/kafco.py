import folium
import pandas

map1 = folium.Map(zoom_control=True,location=[22.22787532061861, 91.84483904505619],zoom_start=12, tiles="Stamen Terrain")
fgm = folium.FeatureGroup(name="Marker")
fgm.add_child(folium.Marker(location=[22.22787532061861, 91.84483904505619],popup="KAFCO",icon=folium.Icon(color="blue")))
fgm.add_child(folium.Marker(location=[22.226554174031538, 91.84086179508567],popup="Center",icon=folium.Icon(color="green")))


points = [[22.226460530594, 91.84349492496816], [22.227540620147764, 91.84326769884188], [22.228314622475327, 91.84310454800288]]
fgr = folium.FeatureGroup(name="Road")
fgr.add_child(folium.PolyLine(points, color="green", weight=2.5, opacity=1))
map1.add_child(fgm)
map1.add_child(fgr)
map1.add_child(folium.LayerControl())
map1.save("kafco.html")