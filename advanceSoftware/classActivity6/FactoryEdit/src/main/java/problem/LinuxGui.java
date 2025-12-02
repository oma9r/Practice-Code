package problem;

public class LinuxGui implements Gui {
    @Override
    public Window createGui() {
        Window win = new LinuxWindow();

        Label label = new LinuxLabel("Linux Label");
        TextBox txt = new LinuxTextBox("Linux input");

        win.addChild(label);
        win.addChild(txt);

        return win;
    }
}
