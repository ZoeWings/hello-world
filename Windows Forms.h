using System;
using System.Windows.Forms;

namespace SimpleRPG
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }

        private void btnHello_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hello, RPG World!");
        }
    }
}
