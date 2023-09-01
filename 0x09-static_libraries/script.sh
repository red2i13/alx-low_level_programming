for file in ./*; do
    if [ -f "$file" ]; then  # Check if it's a regular file
        echo "File: $file"
        cat "$file"  # Display the contents of the file
        echo  # Add an empty line for separation
    fi
done
