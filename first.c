#include <gtk/gtk.h>

static void button_clicked(GtkWidget *widget, gpointer data) {
    gchar *text = gtk_button_get_label(GTK_BUTTON(widget));
    printf("Button clicked: %s\n", text);
}

static void activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *button;

    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Calculator");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);

    grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    // Create buttons for numbers
    for (int i = 0; i < 10; i++) {
        gchar *label = g_strdup_printf("%d", i);
        button = gtk_button_new_with_label(label);
        g_signal_connect(button, "clicked", G_CALLBACK(button_clicked), NULL);
        gtk_grid_attach(GTK_GRID(grid), button, i % 3, i / 3, 1, 1);
        g_free(label);
    }

    // Create buttons for operators
    gchar *operators[] = {"+", "-", "*", "/"};
    for (int i = 0; i < 4; i++) {
        button = gtk_button_new_with_label(operators[i]);
        g_signal_connect(button, "clicked", G_CALLBACK(button_clicked), NULL);
        gtk_grid_attach(GTK_GRID(grid), button, 3, i, 1, 1);
    }

    gtk_widget_show_all(window);
}

int main(int argc, char **argv) {
    GtkApplication *app;
    int status;

    app = gtk_application_new("com.example.calculator", G_APPLICATION_FLAGS_NONE);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    return status;
}
