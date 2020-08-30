Updated from 4.10 to 4.24 by EvoPulseGaming
UE4Webcamera
==================

A plugin that lets you use your web camera in Unreal Engine 4! 
(Great for virtual cameras, like the kinect360 virtual camera, because unreal wont detect it otherwise)
Currently implemented using DirectShow.

How to use
==================

1. This was latest tested on 4.24.3

2. Copy the plugins folder to your `<Game>/Plugins/` folder; alternatively, you can copy to the `Engine/Plugins/` if you wish to make the plugin available to all of your projects.
   > Do not forget to run UE4's `Generate Project Files` to account for these changes!

3. Hook up the Texture you get from running ConnectToCamera(cameraIndex) to a UPROPERTY to prevent it from being garbage collected in your cpp somewhere (begin play might be a good place).

4. Have fun!

(If you enable Plugins, in the file browser filters you will see demo content in the plugin folder!)



Thanks
==================
I was inspired a lot by this directshow project by a guy called "Limitz":
http://www.rohitab.com/discuss/topic/34389-directshow-webcam-capture-class-c/
