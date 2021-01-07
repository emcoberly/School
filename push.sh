#!/bin/sh

./pull.sh
git add --all
export COMMIT_MESSAGE="`git status | grep -oP ":   \K(homework|in-class|projects)/[^/]*" | uniq | tr '\n' ' '; echo`"
git commit -am "Commit $COMMIT_MESSAGE"
git push