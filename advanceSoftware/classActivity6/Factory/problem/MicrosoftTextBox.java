package problem;

import java.awt.Graphics2D;
import java.awt.Rectangle;

public class MicrosoftTextBox extends TextBox {
    public MicrosoftTextBox(String text) {
        super(text);
        setBounds(new Rectangle(0, 0, 150, 25));
    }

    @Override
    public void drawComponent(Graphics2D g) {
        Rectangle b = getBounds();
        g.drawRect(b.x, b.y, b.width, b.height);
        g.drawString(getText(), b.x + H_SPACE, b.y + b.height/2);
    }
}
