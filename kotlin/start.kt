package com.example.numberconverter

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.RadioButton
import android.widget.RadioGroup
import android.widget.TextView

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val inputEditText = findViewById<EditText>(R.id.inputEditText)
        val radioGroup = findViewById<RadioGroup>(R.id.radioGroup)
        val convertButton = findViewById<Button>(R.id.convertButton)
        val resultTextView = findViewById<TextView>(R.id.resultTextView)

        convertButton.setOnClickListener {
            val input = inputEditText.text.toString()
            if (input.isEmpty()) {
                resultTextView.text = "Please enter a number"
                return@setOnClickListener
            }

            val selectedRadioButtonId = radioGroup.checkedRadioButtonId
            val selectedRadioButton = findViewById<RadioButton>(selectedRadioButtonId)
            val base = when (selectedRadioButton.text.toString()) {
                "Decimal" -> 10
                "Binary" -> 2
                "Octal" -> 8
                "Hexadecimal" -> 16
                else -> 10 // Default to decimal
            }

            try {
                val decimalValue = input.toInt(base)
                resultTextView.text = "Decimal: $decimalValue\n" +
                        "Binary: ${decimalValue.toBinaryString()}\n" +
                        "Octal: ${decimalValue.toOctalString()}\n" +
                        "Hexadecimal: ${decimalValue.toHexString()}"
            } catch (e: NumberFormatException) {
                resultTextView.text = "Invalid input for selected base"
            }
        }
    }

    // Helper functions for conversions
    private fun Int.toBinaryString(): String = Integer.toBinaryString(this)
    private fun Int.toOctalString(): String = Integer.toOctalString(this)
    private fun Int.toHexString(): String = Integer.toHexString(this)
}