Teapot-Publisher
================

Publish an OpenGLES render buffer with OpenTok


This is not an efficient implementation
---------------------------------------

The code borrowed from Apple's sample apps is quite old, and there are several
much faster ways to pull data out of an OpenGLES render buffer than using
`glReadPixels`. I didn't write the app to be fast, but rather to show that it
could be done. Enjoy!

Notes
-----

In this example, we're *not* using the OpenTok `videoRender` receiver. Instead,
the renderbuffer is displayed directly, and we set the publisher's rendering
receiver to nil. This is not a performance decision, just that I wasn't sure 
how to get the rendering working if our CAEAGLLayer wasn't being put on the
screen. You could probably do this without interacting with the view at all.

![Screenshot of app](http://i.imgur.com/LaqvqH3.png)