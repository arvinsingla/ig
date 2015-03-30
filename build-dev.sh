#!/bin/sh

MAKEFILE='build-ig.make'
TARGET=$1
CALLPATH=`dirname $0`
drush make --working-copy --no-core --concurrency=5 --contrib-destination=. $CALLPATH/$MAKEFILE $TARGET
