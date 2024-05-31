#!/bin/bash

gigi="$1"

git add .
git commit -m "$gigi"
git push
