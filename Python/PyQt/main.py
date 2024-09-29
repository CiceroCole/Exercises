import main_ui
import sys
from PyQt5.QtWidgets import QApplication, QWidget

if __name__ == "__main__":
    app = QApplication(sys.argv)
    root = QWidget()
    ui = main_ui.Ui_Form()
    ui.setupUi(root)
    ui.lineEdit.text()
    ui.pushButton.clicked.connect(lambda: ui.textBrowser.setText(ui.lineEdit.text()))

    root.setWindowTitle("PyQt5-Test")
    root.show()
    sys.exit(app.exec_())
