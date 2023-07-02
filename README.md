<p align="center"><img src="buildroot/share/pixmaps/logo/marlin-outrun-nf-500.png" height="250" alt="MarlinFirmware's logo" /></p>

<h1 align="center">Creality Ender-3 AIO Marlin Firmware</h1>

<p align="center">
    <a href="/LICENSE"><img alt="GPL-V3.0 License" src="https://img.shields.io/github/license/thisiskeithb/enderaio.svg"></a>
    <a href="https://github.com/thisiskeithb/EnderAIO/graphs/contributors"><img alt="Contributors" src="https://img.shields.io/github/contributors/thisiskeithb/enderaio.svg"></a>
    <a href="https://github.com/thisiskeithb/EnderAIO/commits/E3-AIO-bugfix-2.1.x"><img alt="Last Commit Date" src="https://img.shields.io/github/last-commit/thisiskeithb/EnderAIO/E3-AIO-bugfix-2.1.x"></a>
    <a href="https://github.com/thisiskeithb/EnderAIO/actions/workflows/test-ender-aio-build.yml"><img alt="CI Status" src="https://github.com/thisiskeithb/EnderAIO/actions/workflows/test-ender-aio-build.yml/badge.svg"></a>
    <a href="https://github.com/sponsors/thisiskeithb"><img alt="GitHub Sponsors" src="https://img.shields.io/github/sponsors/thisiskeithb?color=db61a2"></a>
    <br />
    <a href="https://twitter.com/thisiskeithb"><img alt="Follow thisiskeithb on Twitter" src="https://img.shields.io/twitter/url/https/twitter.com/thisiskeithb.svg?style=social&label=Follow%20%40thisiskeithb"></a>
    <a href="https://fosstodon.org/@thisiskeithb"><img alt="Follow thisiskeithb on Mastodon" src="https://img.shields.io/mastodon/follow/109537431986133967?domain=https%3A%2F%2Ffosstodon.org&logoColor=%2300B&style=social"></a>
</p>

## Configuring Ender-3 All-in-One Firmware

To configure this firmware, enable options in [`Ender_AIO_Configuration.h`](Marlin/Ender_AIO_Configuration.h). No other config file editing is required!

## Building Ender-3 All-in-One Firmware

To build this firmware, you'll need [Visual Studio Code](https://code.visualstudio.com/) with [PlatformIO](https://docs.platformio.org/en/latest/integration/ide/vscode.html#platformio-ide-for-vscode). Detailed setup instructions can be found in the [Installing Marlin (PlatformIO with VSCode)](https://marlinfw.org/docs/basics/install_platformio_vscode.html) guide.
## Supported Hardware Upgrades

- **Motherboards**: BigTreeTech SKR Mini E3 V3.x & V2, E3 Turbo, SKR 3.0 & 3.0 EZ
- **Drivers**: TMC2209s on X, Y, Z, and E
- **Displays**: Stock LCD and BigTreeTech TFT35 E3
- **Extruder**: Stock NTC 100K, [WINSINN Dual Gear Extruder](https://www.amazon.com/dp/B07SY745CF), [Bondtech BMG Extruder](https://www.bondtech.se/product/bmg-extruder/), and [Trianglelab DDB V2.0 Extruder](https://www.amazon.com/dp/B08KP189KN)
- **Probe**: [BLTouch V3.1](https://www.amazon.com/dp/B087CQ3RLG)
- **Dual Z**: [Ender 3 Dual Z-Axis Upgrade Kit](https://www.amazon.com/dp/B09N8QQDSP)

## Credits

If you find this project helpful, please consider donating!

 - Keith Bennett [[thisiskeithb](https://github.com/thisiskeithb)], Ender AIO Creator - [💸 Github Sponsors](https://github.com/sponsors/thisiskeithb) / [☕ Ko-fi](https://ko-fi.com/thisiskeithb)
 - Scott Lahteine [[thinkyhead](https://github.com/thinkyhead)], Lead Marlin Developer & Maintainer - [💸 Donate](https://www.thinkyhead.com/donate-to-marlin)

## License

Marlin and the Ender-3 All-in-One Firmware is published under the [GPL license](/LICENSE) because we believe in open development.