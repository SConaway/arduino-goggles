BOARD := "adafruit:avr:trinket3"
PORT := "/dev/tty.wchusbserial1430"

.PHONY: compile

compile:
	arduino-cli compile --fqbn $(BOARD) .

.PHONY: upload

upload: compile
#	test -e $(PORT) || { echo "Port not found!"; exit 1; }
#	$(MAKE) compile

	arduino-cli upload  --fqbn $(BOARD) . # -p $(PORT) .

.PHONY: clean

clean:
	rm -rf build/*
	rm -f *.hex *.elf
