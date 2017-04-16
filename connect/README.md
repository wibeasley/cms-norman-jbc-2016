## Harvest notes

1. The `harvest-1.sh` is intended to be the simplest runnable version possible.  Subsequent scripts (*e.g.*, `harvest-2.sh`) should be more efficient and have better error messages, but be more difficult for novice bash scripters to follow or adapt to their own scripts.

1. `scp` is used because `rsync` is not installed on the Wallaby V23.  However, the text files transfer so quickly (<10 sec), any performance benefit of rsync is probably minimal.

1. If you run it on a cronjob, do not plan to do anything else with your laptop on the internet.  Unless the machine has two network connections, and you can keep them separate

## Short-term TODOs:

1. Refactor the configuration options out of the scripts.  But them in something like a [yaml](http://www.yaml.org/start.html) or [json](http://www.json.org/) file.
1. Each configuration file should include:
    1. Boolean value for if copied files should bt added & committed to the git repository.
    1. An entry for each Wallaby.
1. Each Wallaby in the configuration file should include:
    1. SSID.
    1. location(s) of user files.  If blank, default to `~/Documents/KISS/Default User/`.
    1. IP address.  If blank, default to `192.168.125.1`.
    1. Boolean value indicating if the Wallaby shold be backed up.  The toggle makes it easy to exclude a machine (*e.g.*, for being temporarily out of service) so time is not wasted trying to connect to it.    
    1. Controller version (*e.g.*, 'Wallaby v23') so theoretically it could accommodate institutions that have a heterogenous fleet (even beyond Wallabies in the future).
    1. File transfer protocol.  If blank, default to 'scp'; possibly support rsync in the future.
1. If one SSID/Link has multiple users, nest them all in a single `nmcli` call, to be more efficient.
