import os
category = "src"

def visitDir(path):
    for file in os.listdir(path):
        filepath = os.path.join(path, file)
        if os.path.isfile(filepath) and filepath.split(".")[-1] not in ignoreFiles:
            os.remove(filepath)
            # print(filepath)
        elif os.path.isdir(filepath):
            visitDir(filepath)

if __name__ == '__main__':
    # get current working directory
    current_dir = os.getcwd()
    symbol = "/" if "/" in current_dir else "\\"
    # targetPath = current_dir + symbol + "src"
    targetPath = current_dir + symbol + category
    targetPath.replace("/", "\\")
    print(current_dir)

    # setting ignored files
    ignoreFiles = ["c", "cpp", "py", "h", "dat"]

    visitDir(targetPath)