import os

dir_path = "src"

def renameFile(path):
    for dir, file in os.walk(path):
        print(dir)
        pass


if __name__ == '__main__':
    renameFile(dir_path)

