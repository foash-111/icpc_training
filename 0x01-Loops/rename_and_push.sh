#!/bin/bash

rename_and_push() {
    local original_file="$1"
    local problem_name="$2"
    
    echo "Original file: $original_file"
    echo "Problem name: $problem_name"
    
    # Replace spaces with underscores in the problem name
    local formatted_problem_name=$(echo "$problem_name" | sed 's/ /_/g')
    
    # Remove underscores before and after the dash
    formatted_problem_name=$(echo "$formatted_problem_name" | sed 's/_-_/-/g')
    echo "Formatted problem name: $formatted_problem_name"
    
    # Extract the file prefix (e.g., P from P.cpp)
    local file_prefix="${original_file%%.*}"
    
    # Generate the new file name (e.g., P-Swapping_Two_Numbers.cpp)
    local new_file_name="${formatted_problem_name}.cpp"
    echo "New file name: $new_file_name"
    
    # Rename the file
    mv "$original_file" "$new_file_name" || { echo "Error: File rename failed."; exit 1; }
    
    # Add to git, commit, and push
    git add "$new_file_name"
    git commit -m "$problem_name" || { echo "Error: Git commit failed."; exit 1; }
    git push || { echo "Error: Git push failed."; exit 1; }
}

rename_and_push "$1" "$2"
