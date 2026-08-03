# Mog native package template

Use this repository as a GitHub template for a C/C++ backed Mog package.
Before publishing, replace `native-package-template` and
`native_package_template` throughout the repository, then replace the sample
API, implementation, tests, and supported-target list.

The included workflow builds, validates, and tests Linux x64, Linux ARM64, and
macOS ARM64 artifacts. A matching `v*` tag publishes those artifacts and a
checksum file.
