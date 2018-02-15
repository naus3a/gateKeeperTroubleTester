Starting from Sierra, the Gatekeeper executes unsigned software from a randomized, read only path. This basically breaks all relative paths you use in your app; if you're an OpenFrameworks user, this typically translates in losing your data folder.
This repo is a mini tester app to check if the issue is happening with a specific system and/or a specific way of deployemnt.

It also contains a starter.command script that launches the app from the terminal: this seems to avoid the issue.

It seems that **sometimes** (yeah, I know) moving the app the app to your desktop and then back to its original position deactivates the **blacklist flag**.
