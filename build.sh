#!/usr/bin/env bash

pio run -e normal
pio run -e normal -t upload
pio device monitor
