#!/bin/bash
set -e

# Проверяем, есть ли любые изменения (отслеживаемые и неотслеживаемые)
if [ -n "$(git status --porcelain)" ]; then
    echo "ERROR: You have uncommitted changes!"
    echo ""
    echo "Changed files:"
    git status --short
    
    exit 1
fi

echo "✅ No uncommitted changes found."
echo ""
echo "Updating from git"

git fetch origin
git checkout origin/main

echo ""
echo "build mod"

./build/pack.sh

echo ""
echo "✅ done"