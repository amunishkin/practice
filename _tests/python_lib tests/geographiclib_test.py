from geographiclib.geodesic import Geodesic
import math
geod = Geodesic.WGS84  # define the WGS84 ellipsoid

print("a = " + str(geod.a))
print("f = " + str(1/geod.f))

print() #seperator---

print("The distance from Wellington, NZ (41.32S, 174.81E) to Salamanca, Spain (40.96N, 5.50W)")
g = geod.Inverse(-41.32, 174.81, 40.96, -5.50)
print("The distance is {:.3f} m.".format(g['s12']))
print("The angle is {:.3f} deg.".format(g['azi1']))

print("The point 20000 km SW of Perth, Australia (32.06S, 115.74E)")
g = geod.Direct(-32.06, 115.74, 225, 20000e3)
print("The position(lat,lon) is ({:.8f}, {:.8f}).".format(g['lat2'],g['lon2']))

print("The area between the geodesic from JFK Airport (40.6N, 73.8W) to LHR Airport (51.6N, 0.5W) and the equator.")
g = geod.Inverse(40.6, -73.8, 51.6, -0.5, Geodesic.AREA)
print("The area is {:.1f}  m^2".format(g['S12']))

print() #seperator---

print("Testing polygon construction")
g = geod.Polygon()
g.AddPoint(36.540327747920294, -121.55433866573590)
g.AddPoint(36.559384117005380, -121.55433866573590)
g.AddPoint(36.559384117005380, -121.53263196155223)
(num, para, area) = g.TestPoint(36.540327747920294, -121.53263196155223)
print("Number =",num,"\n",
      "Parameter =",para,"m\n",
      "Area =",area,"m^2")
