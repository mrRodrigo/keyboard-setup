# my config Corne Keyboard (CRKBD)

A split keyboard with 3x6 vertically staggered keys and 3 thumb keys.

Keyboard Maintainer: [foostan](https://github.com/foostan/) [@foostan](https://twitter.com/foostan)  
Hardware Supported: Corne PCB
Hardware Availability: [PCB & Case Data](https://github.com/foostan/crkbd)

Flash example for this keyboard of v1:

```sh
qmk flash -kb crkbd/rev1 -km default
```

my keymap:
keymaps/my_config

compile to promicro:

`
qmk compile CONVERT_TO=promicro_rp2040 -kb crkbd/rev1 -km KEYMAP_NAME
`

Just move the uf2 to root folder of promicro


links:
https://github.com/qmk/qmk_distro_msys/releases/tag/1.9.0
See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. 

## Bootloader

The Corne PCBs have a reset and boot buttons next to the TRRS jack to enter in to the bootloader.
