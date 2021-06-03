from cx_Freeze import setup, Executable

executables = [Executable('messenger.py', targetName='Messenger.exe')]

excludes = []  # ['unicodedata', 'logging', 'unittest', 'email', 'html', 'http', 'urllib', 'xml', 'bz2']

includes = ['PyQt6', 'clientui']

packages = ['QtWidgets', 'QtCore']

zip_include_packages = ['collections', 'encodings', 'importlib', 'clientui.py']

options = {
    'build_exe': {
        'excludes': excludes,
        'includes':includes,
        'packages':packages,
        'zip_include_packages': zip_include_packages,
        'build_exe': 'build_version_msg',
    }
}

setup(
    name="messenger",
    version="1.0",
    description="by Nemov Kirill, Soldatov Ilya, Volkov Victor",
    executables=executables,
    options=options
)
