<p align="right">
  <strong>简体中文</strong> · <a href="README.md">English</a>
</p>

# AI Passport 飞书消息终端

这个公开 Fork 用于开发运行在 FoloToy AI Passport 上的独立飞书消息终端。
完成配置后，固件直接运行在 ESP32-C3 设备上，不依赖手机、电脑中转或桥接服务。

当前开发代码位于
[`feature/feishu-messenger`](https://github.com/SHLcy/ai-passport/tree/feature/feishu-messenger)。
`main` 分支尽量保持与 FoloToy 上游基线同步，便于持续更新。

## 当前功能

- AP 与 BLUFI 配网
- 飞书用户扫码授权
- 带未读红点的会话列表
- 聊天记录与单条消息详情
- 语音转文字直接发送和指定消息回复
- 飞书图片下载与设备端预览
- 中文界面字体与数字电量百分比
- 前台及后台定期刷新消息

产品流程、架构、权限和已知限制请参阅
[中文设计文档](docs/software-design/feishu-messenger.zh_CN.md)或
[英文设计文档](docs/software-design/feishu-messenger.md)。

## 构建与测试

目标硬件为 8 MB Flash 的 ESP32-C3，开发环境为 ESP-IDF 5.5.3。

```bash
source "$IDF_PATH/export.sh"
./tools/validate.sh
idf.py -p /dev/cu.usbmodemXXXX flash monitor
```

请通过 ESP-IDF 项目配置填写飞书应用 ID 和密钥，绝不要提交生产凭据。
量产设备应启用 Flash Encryption 和 NVS Encryption。

## 参与贡献

欢迎提交 Issue、讨论、文档改进、测试和 Pull Request。提交改动前请阅读
[贡献指南](.github/CONTRIBUTING.md)。项目采用 [MIT License](LICENSE)。

