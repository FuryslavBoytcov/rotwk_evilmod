#!/bin/bash

ALL_ARGS="$@"

# Определяем систему
OS_TYPE="$(uname)"

# Переходим в директорию, где находится скрипт
CURRENT_DIR="$(dirname "${BASH_SOURCE[0]}")"
echo "cur $CURRENT_DIR"

if [[ "$OS_TYPE" == "Darwin" ]]; then
    # --- macOS ---
    APP_PATH="./$CURRENT_DIR/osx/SageBigFileConvertor"
    
    # Даем права на запуск, если их нет
    chmod +x "$APP_PATH"
    
    # Запуск: передаем аргументы через "$@"
    echo "Running on macOS with args: $ALL_ARGS"
    "$APP_PATH" "$@"

elif [[ "$OS_TYPE" == *"MINGW"* || "$OS_TYPE" == *"MSYS"* || "$OS_TYPE" == *"CYGWIN"* ]]; then
    # --- Windows (через Git Bash / Mingw) ---
    APP_PATH="./$CURRENT_DIR/win-64/SageBigFileConvertor.exe"
    
    echo "Running on Windows with args: $ALL_ARGS"
    # Запуск EXE
    "$APP_PATH" "$@"

else
    echo "Unknown OS: $OS_TYPE"
    exit 1
fi
