from fpdf import FPDF

class StudyGuidePDF(FPDF):
    def header(self):
        # Title for each page except cover
        if self.page_no() == 1:
            return
        self.set_font("Arial", "B", 12)
        self.cell(0, 10, "ME144 Exam Study Guide", 0, 1, "C")
        self.ln(2)
    
    def footer(self):
        self.set_y(-15)
        self.set_font("Arial", "I", 8)
        self.cell(0, 10, f"Page {self.page_no()}", 0, 0, "C")

pdf = StudyGuidePDF()
pdf.set_auto_page_break(auto=True, margin=15)

# Cover Page
pdf.add_page()
pdf.set_font("Arial", "B", 20)
pdf.cell(0, 15, "ME144 Exam Study Guide", ln=True, align="C")
pdf.ln(10)
pdf.set_font("Arial", "", 14)
cover_text = (
    "This study guide merges the most important topics for the ME144 exam covering:\n"
    "1. Fundamentals of Engineering Drawing\n"
    "2. Orthographic Projection\n"
    "3. Introduction to Mechanical Engineering\n"
    "4. Scope of Civil Engineering\n\n"
    "It also includes sample exam questions and important drawing constructions for engineering graphics."
)
pdf.multi_cell(0, 10, cover_text)
pdf.ln(10)

# Table of Contents
pdf.add_page()
pdf.set_font("Arial", "B", 16)
pdf.cell(0, 10, "Table of Contents", ln=True)
pdf.ln(5)
pdf.set_font("Arial", "", 12)
toc = [
    "1. Fundamentals of Engineering Drawing",
    "   - Importance, Instruments, Materials",
    "   - BIS & ISO Standards, Types of Lines",
    "   - Projection Methods (SP 46-1988), Engineering Scale, Title Block",
    "2. Orthographic Projection",
    "   - Front, Top, and Side Views",
    "3. Introduction to Mechanical Engineering",
    "   - Core Concepts and Applications",
    "4. Scope of Civil Engineering",
    "   - Branches, Roles, and Key Areas",
    "5. Important Drawing Constructions for Engineering Graphics",
    "   - Plain Scale, Diagonal Scale, Geometric Constructions",
    "6. Sample Exam Paper"
]
for item in toc:
    pdf.cell(0, 8, item, ln=True)
pdf.ln(5)

# Section 1: Fundamentals of Engineering Drawing
pdf.add_page()
pdf.set_font("Arial", "B", 16)
pdf.cell(0, 10, "1. Fundamentals of Engineering Drawing", ln=True)
pdf.ln(5)
pdf.set_font("Arial", "", 12)
text1 = (
    "Engineering drawing is the universal language of engineers. It involves the use of standardized "
    "drawing instruments and materials. Key aspects include:\n\n"
    "- Importance: Critical for clear communication of design intent.\n"
    "- Instruments & Materials: Pencils, scales, compasses, protractors, and various drafting materials.\n"
    "- Standards: Adherence to BIS (Bureau of Indian Standards) and ISO standards ensures consistency.\n"
    "- Lines and Projections: Understanding different types of lines (continuous, hidden, center lines) "
    "and projection methods as per SP 46-1988 is essential.\n"
    "- Engineering Scale: Used to reduce or enlarge drawings while maintaining proportions.\n"
    "- Title Block & Dimensioning: Includes information such as project title, date, scale, and drawing number.\n"
)
pdf.multi_cell(0, 8, text1)
pdf.ln(5)

# Section 2: Orthographic Projection
pdf.add_page()
pdf.set_font("Arial", "B", 16)
pdf.cell(0, 10, "2. Orthographic Projection", ln=True)
pdf.ln(5)
pdf.set_font("Arial", "", 12)
text2 = (
    "Orthographic projection is a method of representing three-dimensional objects in two dimensions. "
    "It involves projecting views onto planes to generate front, top, and side views. Key points:\n\n"
    "- Provides clear, unambiguous details of the object.\n"
    "- Essential for manufacturing and construction drawings.\n"
    "- Follows standard conventions for view arrangement and dimensioning."
)
pdf.multi_cell(0, 8, text2)
pdf.ln(5)

# Section 3: Introduction to Mechanical Engineering
pdf.add_page()
pdf.set_font("Arial", "B", 16)
pdf.cell(0, 10, "3. Introduction to Mechanical Engineering", ln=True)
pdf.ln(5)
pdf.set_font("Arial", "", 12)
text3 = (
    "Mechanical Engineering focuses on the design, analysis, and manufacturing of mechanical systems. "
    "It encompasses topics such as:\n\n"
    "- Machine Design and Dynamics\n"
    "- Thermal and Fluid Sciences\n"
    "- Materials and Manufacturing Processes\n\n"
    "This section provides a foundational overview of the core principles that govern mechanical systems."
)
pdf.multi_cell(0, 8, text3)
pdf.ln(5)

# Section 4: Scope of Civil Engineering
pdf.add_page()
pdf.set_font("Arial", "B", 16)
pdf.cell(0, 10, "4. Scope of Civil Engineering", ln=True)
pdf.ln(5)
pdf.set_font("Arial", "", 12)
text4 = (
    "Civil Engineering deals with the planning, design, and construction of infrastructure. Its scope includes:\n\n"
    "- Structural Engineering: Design and analysis of buildings and bridges.\n"
    "- Geotechnical Engineering: Soil mechanics and foundation design.\n"
    "- Transportation Engineering: Roadways, railways, and traffic management.\n"
    "- Water Resources Engineering: Hydraulic structures, irrigation, and flood control.\n"
    "- Environmental and Construction Management: Sustainable development and project execution."
)
pdf.multi_cell(0, 8, text4)
pdf.ln(5)

# Section 5: Important Drawing Constructions for Engineering Graphics
pdf.add_page()
pdf.set_font("Arial", "B", 16)
pdf.cell(0, 10, "5. Important Drawing Constructions", ln=True)
pdf.ln(5)
pdf.set_font("Arial", "", 12)
text5 = (
    "For the Engineering Graphics exam, focus on mastering the following drawings:\n\n"
    "- Plain Scale Construction: Drawing a scale with proper divisions and calculations.\n"
    "- Diagonal Scale Construction: Used for measuring subdivisions accurately (e.g., RF 1/6250).\n"
    "- Orthographic Projections: Creating front, top, and side views of 3D objects.\n"
    "- Geometric Constructions: Techniques for drawing accurate angles, bisectors, and polygons.\n"
    "- Dimensioning and Title Blocks: Including all necessary details as per drawing standards."
)
pdf.multi_cell(0, 8, text5)
pdf.ln(5)

# Section 6: Sample Exam Paper
pdf.add_page()
pdf.set_font("Arial", "B", 16)
pdf.cell(0, 10, "6. Sample Exam Paper", ln=True)
pdf.ln(5)
pdf.set_font("Arial", "", 12)
sample_exam = (
    "Part A: Engineering Graphics (10 Marks)\n"
    "-----------------------------------------\n"
    "Q1 (4 Marks): Draw a plain scale of RF 1/100. Indicate divisions and provide calculations.\n\n"
    "Q2 (3 Marks): Construct a diagonal scale of RF 1/6250 to read up to 1 km. Show 653 m on the scale.\n\n"
    "Q3 (3 Marks): Produce an orthographic projection of a cube. Include front, top, and side views with dimensions.\n\n"
    "Part B: Mechanics & Civil Engineering (10 Marks)\n"
    "-------------------------------------------------\n"
    "Q4 (5 Marks): Discuss the importance of surveying in civil engineering, covering definitions, primary divisions (plane and geodetic), and applications.\n\n"
    "Q5 (5 Marks): Explain the scope of Civil Engineering, highlighting at least three branches (e.g., structural, geotechnical, transportation) and their significance in infrastructure development.\n"
)
pdf.multi_cell(0, 8, sample_exam)
pdf.ln(5)
pdf.set_font("Arial", "B", 12)
pdf.cell(0, 10, "Total Marks: 20    Time Allowed: 2 Hours", ln=True, align="C")

output_file = "Merged_Exam_Study_Guide_ME144.pdf"
pdf.output(output_file)
print(f"PDF generated: {output_file}")
EOF

