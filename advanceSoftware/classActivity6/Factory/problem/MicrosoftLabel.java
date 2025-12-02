package problem;

import java.awt.Graphics2D;
import java.awt.Rectangle;

public class MicrosoftLabel extends Label {
    public MicrosoftLabel(String text) {
        super(text);
        setBounds(new Rectangle(0, 0, 120, 25));
    }

    @Override
    public void drawComponent(Graphics2D g) {
        Rectangle b = getBounds();
        g.drawString(getText(), b.x + H_SPACE, b.y + b.height/2);
    }
}
