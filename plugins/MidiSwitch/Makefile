#!/usr/bin/make -f
# Makefile for DISTRHO Plugins #
# ---------------------------- #
# Created by falkTX
#

# --------------------------------------------------------------
# Project name, used for binaries

NAME = d_midiSwitch
DEBUG = true

# --------------------------------------------------------------
# Files to build

FILES_DSP = \
	MidiSwitch.cpp

# --------------------------------------------------------------
# Do some magic

include ../../dpf/Makefile.plugins.mk

# --------------------------------------------------------------
# Enable all possible plugin types

# ifeq ($(LINUX),true)
# TARGETS += jack
# endif

TARGETS += lv2_dsp
# TARGETS += vst

all: $(TARGETS)

# --------------------------------------------------------------
