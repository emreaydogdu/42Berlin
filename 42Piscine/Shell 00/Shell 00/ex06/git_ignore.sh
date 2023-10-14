root="$(git rev-parse --show-toplevel)"
cd "${root}"
git ls-files --others --ignored --exclude-standard
