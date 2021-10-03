using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BasicCalculator
{
    public partial class Form1 : Form
    {
        double num1, num2, result; 

        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            num1 = double.Parse(txtNumber1.Text);
            num2 = double.Parse(txtNumber2.Text);

            result = num1 + num2;

            lblAns.Text = result.ToString();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            num1 = double.Parse(txtNumber1.Text);
            num2 = double.Parse(txtNumber2.Text);

            result = num1 / num2;

            lblAns.Text = result.ToString();
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            num1 = double.Parse(txtNumber1.Text);
            num2 = double.Parse(txtNumber2.Text);

            result = num1 * num2;

            lblAns.Text = result.ToString();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            txtNumber1.Text = "";
            txtNumber2.Text = "";
            lblAns.Text = "";
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void txtNumber1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            num1 = double.Parse(txtNumber1.Text);
            num2 = double.Parse(txtNumber2.Text);

            result = num1 - num2;

            lblAns.Text = result.ToString();
        }
    }
}
