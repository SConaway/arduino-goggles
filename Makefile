BOARD := "arduino:avr:uno"
PORT := "/dev/tty.wchusbserial1430"

.PHONY: compile

compile: rfid_unlock.ino
	arduino-cli compile --fqbn $(BOARD) .

.PHONY: upload

upload:
	test -e $(PORT) || { echo "Port not found!"; exit 1; }
	$(MAKE) compile

	arduino-cli upload  --fqbn $(BOARD) -p $(PORT) .

.PHONY: clean

clean:
	rm -rf build/*
	rm -f *.hex *.elf
