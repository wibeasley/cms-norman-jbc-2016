## Harvest notes

* `scp` is used because `rsync` is not installed on the Wallaby V23.  However, the text files transfer so quickly (<10 sec), any performance benefit of rsync is probably minimal.

* If you run it on a cronjob, don't plan to do anything else with your laptop on the internet.
