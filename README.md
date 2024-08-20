This Arduino Project uses a microphone to detect sound levels and activates three LEDs (green, blue, and red) based on the volume. Each LED corresponds to a different threshold: low, medium, and high.
How It Works:
	•	Microphone Input: Captures sound and converts it into an analog signal.

	•	LED Thresholds:
	◦	Green LED (Pin 3): Activates at low volume (threshold: 50).
	◦	Blue LED (Pin 2): Activates at medium volume (threshold: 60).
	◦	Red LED (Pin 1): Activates at high volume (threshold: 90).

To customise the sensitivity of the lamp to your specific song, the threshold can be adjusted by recommended +/- 10

This will need a physical microphone piece connected to the Arduino to work,
Initially, the concept was to use the microphone and FFT analyzer from p5js, but I decided to use a physical microphone instead for compactness.

Video for development below: 
https://ual.cloud.panopto.eu/Panopto/Pages/Viewer.aspx?id=1204f31a-3a17-41d0-8aa7-b1d1017c86d7

IF THERE ARE ANY PROBLEMS OPENING PLEASE EMAIL ME
