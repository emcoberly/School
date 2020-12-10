#!/bin/bash

git pull --no-edit > /dev/null
git fetch upstream
git checkout master &> /dev/null
git merge upstream/master -m "automerging"