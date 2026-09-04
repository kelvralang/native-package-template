# Kelvra native package template

Use this repository as a GitHub template for a C/C++ backed Kelvra package.
Before publishing, replace `native-package-template` and
`native_package_template` throughout the repository, then replace the sample
API, implementation, tests, and supported-target list.

The small caller workflows use the versioned `kelvralang/package-actions@v2`
contract to build, validate, and test Linux x64, Linux ARM64, and macOS ARM64
artifacts. A matching `v*` tag publishes those artifacts and a checksum file.

```kelvra
const packageTemplate = @import("github.com/kelvralang/native-package-template")
print(packageTemplate.greeting())
```
