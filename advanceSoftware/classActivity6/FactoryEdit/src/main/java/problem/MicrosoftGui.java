package problem;

public class MicrosoftGui implements Gui {
    @Override
    public Window createGui() {
        Window win = new MicrosoftWindow();

        Label label = new MicrosoftLabel("Microsoft Label");
        TextBox txt = new MicrosoftTextBox("Type here");

        win.addChild(label);
        win.addChild(txt);

        return win;
    }
}
