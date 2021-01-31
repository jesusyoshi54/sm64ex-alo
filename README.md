# sm64ex_alo
Fork of [sm64pc/sm64ex](https://github.com/sm64pc/sm64ex/tree/nightly) with additional features. 

## Additional Pre reqs

 * pypng
 * bitstring

## Changes
 * Restored N64 build.
 * Additional backends merged from other forks (3DS, Wii U, Switch) (more incoming)

## Hackporting

This repo has been forked from sm64ex_alo to be optimized for porting romhacks from binary to every possible target.

Each branch of this repository should be a hack that has finished being ported or is currently being ported.

### Porting Tools

RM2C is the tool I developed to be able to port romhacks: [RM2C](https://gitlab.com/scuttlebugraiser/rom-manger-2-c)

When using the data from RM2C, make sure to set RM2C to 1 in the makefile.

### Changes to Master Branch

 * CI texture support
 * Skinned Mario Model
 * Custom version of Puppycam
 * Extended Bounds
 * Various Bugfixes
 * Skip Intro
 * Separated Custom Leveldata From Vanilla Leveldata
 * Various defines added to accept RM2C output configurations in single config file

## Building

### Recommended BUILD cmds

 1. WINDOWS_BUILD
	* make clean && make RM2CPC
 2. N64 BUILD
	* make -j4 RM2C=1


 * To build for sm64ex platforms, [click here](https://github.com/sm64pc/sm64ex/blob/nightly/README.md).
 * To build for N64, [click here](https://github.com/n64decomp/sm64/blob/master/README.md). (TARGET_N64=1)
 * To build for Wii U, [click here](https://github.com/aboood40091/sm64-port/blob/master/README.md). (TARGET_WII_U=1)
 * To build for N3DS, [click here](https://github.com/sm64-port/sm64_3ds/blob/master/README.md). (TARGET_N3DS=1)
 * To build for Switch, [click here](https://github.com/fgsfdsfgs/sm64ex/blob/switch/README.md). (TARGET_SWITCH=1)
