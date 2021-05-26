
add_library(Qt5::QGeoPositionInfoSourceFactorySerialNmea MODULE IMPORTED)


_populate_Positioning_plugin_properties(QGeoPositionInfoSourceFactorySerialNmea RELEASE "position/qtposition_serialnmea.dll" TRUE)
_populate_Positioning_plugin_properties(QGeoPositionInfoSourceFactorySerialNmea DEBUG "position/qtposition_serialnmead.dll" TRUE)

list(APPEND Qt5Positioning_PLUGINS Qt5::QGeoPositionInfoSourceFactorySerialNmea)
set_property(TARGET Qt5::Positioning APPEND PROPERTY QT_ALL_PLUGINS_position Qt5::QGeoPositionInfoSourceFactorySerialNmea)
set_property(TARGET Qt5::QGeoPositionInfoSourceFactorySerialNmea PROPERTY QT_PLUGIN_TYPE "position")
set_property(TARGET Qt5::QGeoPositionInfoSourceFactorySerialNmea PROPERTY QT_PLUGIN_EXTENDS "")
set_property(TARGET Qt5::QGeoPositionInfoSourceFactorySerialNmea PROPERTY QT_PLUGIN_CLASS_NAME "QGeoPositionInfoSourceFactorySerialNmea")
