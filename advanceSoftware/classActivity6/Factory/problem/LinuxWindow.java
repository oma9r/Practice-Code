package problem;

import java.awt.Graphics2D;
import java.awt.Rectangle;

public class LinuxWindow extends Window {
    public LinuxWindow() {
        super("Linux Window");
    }

    @Override
    public void drawComponent(Graphics2D g) {
        Rectangle b = getBounds();
        g.drawRect(0, 0, b.width - 1, b.height - 1);
        g.drawString("[Linux] " + getTitle(), H_SPACE, TITLE_HEIGHT - 5);

    }
}
