import os

def get_file_names(directory):
    """
    Get a list of file names in the specified directory.
    Args:
    directory (str): The path to the directory from which to list files. 
    Returns:
    list: A list of file names in the directory.
    """
    try:
        # List all files in the directory
        file_names = [f for f in os.listdir(directory) if os.path.isfile(os.path.join(directory, f))]   

        return file_names
    except FileNotFoundError:
        print(f"The directory {directory} does not exist.")
        return []
    except Exception as e:
        print(f"An error occurred: {e}")
        return []
    
# Example usage 
if __name__ == "__main__":
    directory_path = "bitmaps"  # Replace with your directory path
    files = get_file_names(directory_path)
    for i in files:
        if i.endswith('.h'):
            print(i[:-2])