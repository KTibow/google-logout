# google-logout
A simple bit of code that can do a lot. Maybe put this on a bad-usb.
It signs you out of your Google account, and then rickrolls you.
To use, go to [https://ktibow.github.io/google-logout/](https://ktibow.github.io/google-logout/). Or for a badusb, just make it type in that adress. Or for a link, just link to that, and maybe disguise it as something like
```
I found this really cool microcontroller! It's called an Arduino, and you can purchase them right now at https://store.arduino.cc/usa/!
```
But instead of having `https://store.arduino.cc/usa/` link to `https://store.arduino.cc/usa/`, it links to `https://ktibow.github.io/google-logout/`.
The actual page is in `index.html`, and feel free to put that on to another page instead.
For a BadUSB, it would just be simply opening the page. I have a payload in `google_logout.ino` to run on a Leonardo, which was what I had. It could just as easily work on a Rubber Ducky or a Malduino, too.
