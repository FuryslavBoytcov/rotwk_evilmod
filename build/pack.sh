#!/bin/bash

# Получаем текущую директорию запуска (откуда вызвали скрипт)
CURRENT_DIR="$(pwd)"
# Путь к папке mod на уровень выше
MOD_PATH="$CURRENT_DIR/mod"

echo "Current directory: $CURRENT_DIR"
echo "Mod path: $MOD_PATH"

./build/builds/run.sh pack \
     --input-path  "$MOD_PATH" \
     --output-path "$CURRENT_DIR/__evilmod.big" \
     --buffer-size 4190208 \
     --rewrite true \
     --filter "*.*" 