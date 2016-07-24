#!/bin/bash -x
. "$(dirname "$0")/../etc/env.sh"
DIR="$(dirname "$0")/.."
cd "$DIR"/src
cygstart /cygdrive/c/programs.x86/Microsoft\ Visual\ Studio\ 12.0/Common7/IDE/devenv.exe CipherShed.sln
