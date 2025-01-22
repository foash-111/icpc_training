#!/bin/bash

remove_single_char_files() {
    # Find all files with names consisting of a single character (before the extension)
    for file in *; do
        if [[ -f "$file" && "${file%%.*}" =~ ^.$ ]]; then
            echo "Removing file: $file"
            rm "$file"
            git rm "$file"
        fi
    done
    git add -u
    git commit -m "Remove single-character files"
    git push

}

remove_single_char_files
