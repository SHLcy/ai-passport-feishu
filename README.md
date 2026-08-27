<p align="right">
  <a href="README.zh_CN.md">简体中文</a> · <strong>English</strong>
</p>

# AI Passport Feishu Messenger

This public fork develops a standalone Feishu messenger for the FoloToy AI
Passport. The firmware runs directly on the ESP32-C3 device; it does not depend
on a phone, desktop relay, or bridge service after setup.

Active development is on
[`feature/feishu-messenger`](https://github.com/SHLcy/ai-passport/tree/feature/feishu-messenger).
The `main` branch stays close to the upstream FoloToy baseline for easier
synchronization.

## Current features

- AP and BLUFI network provisioning
- QR-code Feishu user authorization
- Conversation list with unread indicators
- Message history and individual message details
- Direct voice-to-text messages and replies
- Feishu image download and on-device preview
- Chinese UI font and numeric battery percentage
- Periodic foreground and background message refresh

See the [English design document](docs/software-design/feishu-messenger.md) or
the [Simplified Chinese design document](docs/software-design/feishu-messenger.zh_CN.md)
for the product flow, architecture, permissions, and known limits.

## Build and test

The target is ESP32-C3 with 8 MB flash and ESP-IDF 5.5.3.

```bash
source "$IDF_PATH/export.sh"
./tools/validate.sh
idf.py -p /dev/cu.usbmodemXXXX flash monitor
```

Configure the Feishu application ID and secret through ESP-IDF project
configuration. Never commit production credentials. Production devices should
enable Flash Encryption and NVS Encryption.

## Contributing

Issues, discussions, documentation improvements, tests, and pull requests are
welcome. Please read [CONTRIBUTING.md](.github/CONTRIBUTING.md) before sending a
change. The project is available under the [MIT License](LICENSE).

