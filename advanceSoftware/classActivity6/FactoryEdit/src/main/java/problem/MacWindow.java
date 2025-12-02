package problem;

import java.awt.Graphics2D;
import java.awt.Rectangle;

public class MacWindow extends Window {
    public MacWindow() {
        super("Mac Window");
    }

    @Override
    public void drawComponent(Graphics2D g) {
        Rectangle b = getBounds();
        g.drawRoundRect(0, 0, b.width - 1, b.height - 1, 20, 20);
        g.drawString(" " + getTitle(), H_SPACE, TITLE_HEIGHT - 5);
    }
}
