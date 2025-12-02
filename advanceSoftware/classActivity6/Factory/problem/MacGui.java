package problem;

public class MacGui implements Gui {
    @Override
    public Window createGui() {
        Window win = new MacWindow();

        Label label = new MacLabel("Mac Label");
        TextBox txt = new MacTextBox("Mac input");

        win.addChild(label);
        win.addChild(txt);

        return win;
    }
}
