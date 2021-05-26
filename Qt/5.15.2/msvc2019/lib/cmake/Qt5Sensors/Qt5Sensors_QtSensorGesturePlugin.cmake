
add_library(Qt5::QtSensorGesturePlugin MODULE IMPORTED)


_populate_Sensors_plugin_properties(QtSensorGesturePlugin RELEASE "sensorgestures/qtsensorgestures_plugin.dll" TRUE)
_populate_Sensors_plugin_properties(QtSensorGesturePlugin DEBUG "sensorgestures/qtsensorgestures_plugind.dll" TRUE)

list(APPEND Qt5Sensors_PLUGINS Qt5::QtSensorGesturePlugin)
set_property(TARGET Qt5::Sensors APPEND PROPERTY QT_ALL_PLUGINS_sensorgestures Qt5::QtSensorGesturePlugin)
set_property(TARGET Qt5::QtSensorGesturePlugin PROPERTY QT_PLUGIN_TYPE "sensorgestures")
set_property(TARGET Qt5::QtSensorGesturePlugin PROPERTY QT_PLUGIN_EXTENDS "-")
set_property(TARGET Qt5::QtSensorGesturePlugin PROPERTY QT_PLUGIN_CLASS_NAME "QtSensorGesturePlugin")
